
#include "provisioner.h"
#include "storage.h"

void setup() {
    Serial.begin(115200);
    Serial.println("\n  awake...");

    char ssid[32];
    char pass[32];

    #ifdef CLEAR_CREDS
        Serial.println("\n\tclearing creds");
        storage.clear_creds();
    #endif

    if (!storage.creds_already_exist(ssid, pass)) {
        provisioner.get_creds(ssid, pass);
        storage.store_creds(ssid, pass);
    }

    WiFi.begin(ssid, pass);

    while (WiFi.status() != WL_CONNECTED) {}

    Serial.println("\n  connected...");
}

void loop() {}