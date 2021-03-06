#ifdef __cplusplus
extern "C" {
#endif
extern EResult cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultStatus(void *, SteamInventoryResult_t);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultItems(void *, SteamInventoryResult_t, SteamItemDetails_t *, uint32 *);
extern uint32 cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultTimestamp(void *, SteamInventoryResult_t);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_CheckResultSteamID(void *, SteamInventoryResult_t, CSteamID);
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DestroyResult(void *, SteamInventoryResult_t);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetAllItems(void *, SteamInventoryResult_t *);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemsByID(void *, SteamInventoryResult_t *, const SteamItemInstanceID_t *, uint32);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_SerializeResult(void *, SteamInventoryResult_t, void *, uint32 *);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DeserializeResult(void *, SteamInventoryResult_t *, const void *, uint32, bool);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GenerateItems(void *, SteamInventoryResult_t *, const SteamItemDef_t *, const uint32 *, uint32);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GrantPromoItems(void *, SteamInventoryResult_t *);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItem(void *, SteamInventoryResult_t *, SteamItemDef_t);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItems(void *, SteamInventoryResult_t *, const SteamItemDef_t *, uint32);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ConsumeItem(void *, SteamInventoryResult_t *, SteamItemInstanceID_t, uint32);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ExchangeItems(void *, SteamInventoryResult_t *, const SteamItemDef_t *, const uint32 *, uint32, const SteamItemInstanceID_t *, const uint32 *, uint32);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TransferItemQuantity(void *, SteamInventoryResult_t *, SteamItemInstanceID_t, uint32, SteamItemInstanceID_t);
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_SendItemDropHeartbeat(void *);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TriggerItemDrop(void *, SteamInventoryResult_t *, SteamItemDef_t);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TradeItems(void *, SteamInventoryResult_t *, CSteamID, const SteamItemInstanceID_t *, const uint32 *, uint32, const SteamItemInstanceID_t *, const uint32 *, uint32);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_LoadItemDefinitions(void *);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionIDs(void *, SteamItemDef_t *, uint32 *);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionProperty(void *, SteamItemDef_t, const char *, char *, uint32 *);
extern SteamAPICall_t cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_RequestEligiblePromoItemDefinitionsIDs(void *, CSteamID);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetEligiblePromoItemDefinitionIDs(void *, CSteamID, SteamItemDef_t *, uint32 *);
#ifdef __cplusplus
}
#endif
