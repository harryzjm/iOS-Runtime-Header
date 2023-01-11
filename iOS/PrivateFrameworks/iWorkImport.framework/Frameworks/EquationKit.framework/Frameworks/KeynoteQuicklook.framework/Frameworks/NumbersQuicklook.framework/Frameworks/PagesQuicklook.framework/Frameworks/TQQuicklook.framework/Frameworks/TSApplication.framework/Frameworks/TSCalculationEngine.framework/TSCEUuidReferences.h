//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSCEUuidReferences : NSObject
{
    UUIDData_5fbc143e _ownerUID;
    struct unordered_map<TSU::UUIDData<TSP::UUIDData>, TSCECellCoordSet, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, TSCECellCoordSet>>> _coordSetsReferringToTable;
    struct unordered_map<TSU::UUIDData<TSP::UUIDData>, std::__1::unordered_map<TSU::UUIDData<TSP::UUIDData>, TSCECellCoordSet, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, TSCECellCoordSet>>>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, std::__1::unordered_map<TSU::UUIDData<TSP::UUIDData>, TSCECellCoordSet, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, TSCECellCoordSet>>>>>> _coordSetsReferringToUuidInTable;
    struct unordered_map<TSUCellCoord, std::__1::unordered_set<TSCEUuidPair, std::__1::hash<TSCEUuidPair>, std::__1::equal_to<TSCEUuidPair>, std::__1::allocator<TSCEUuidPair>>, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, std::__1::unordered_set<TSCEUuidPair, std::__1::hash<TSCEUuidPair>, std::__1::equal_to<TSCEUuidPair>, std::__1::allocator<TSCEUuidPair>>>>> _uuidsByCoord;
}

+ (id)_stringForInternalCellRef:(const struct TSCEInternalCellReference *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) UUIDData_5fbc143e ownerUID; // @synthesize ownerUID=_ownerUID;
- (void)encodeToArchive:(struct UuidReferencesArchive *)arg1 archiver:(id)arg2;
- (void)unpackAfterUnarchive;
- (id)initFromArchive:(const struct UuidReferencesArchive *)arg1 ownerUID:(const UUIDData_5fbc143e *)arg2;
- (_Bool)getCellRefs:(struct TSCECellRefSet *)arg1 referringToOwnerUID:(const UUIDData_5fbc143e *)arg2 referringToUuids:(const vector_4dc5f307 *)arg3;
- (void)getAllCellRefs:(struct TSCECellRefSet *)arg1 referringToOwnerUID:(const UUIDData_5fbc143e *)arg2;
- (void)getCellRefs:(struct TSCECellRefSet *)arg1 referringToOwners:(const vector_4dc5f307 *)arg2;
- (void)getCellRefs:(struct TSCECellRefSet *)arg1 referringToOwner:(const UUIDData_5fbc143e *)arg2;
- (void)clear;
- (void)removeCellCoord:(const struct TSUCellCoord *)arg1;
- (void)removeCellCoord:(const struct TSUCellCoord *)arg1 referringToCategoryRef:(const struct TSCECategoryRef *)arg2;
- (void)addCellCoord:(const struct TSUCellCoord *)arg1 referringToCategoryRef:(const struct TSCECategoryRef *)arg2;
- (void)removeCellCoord:(const struct TSUCellCoord *)arg1 referringToTableUID:(const UUIDData_5fbc143e *)arg2 forColumnRowUuid:(const UUIDData_5fbc143e *)arg3;
- (void)addCellCoord:(const struct TSUCellCoord *)arg1 referringToTableUID:(const UUIDData_5fbc143e *)arg2 forColumnRowUuid:(const UUIDData_5fbc143e *)arg3;
- (void)removeCellCoord:(const struct TSUCellCoord *)arg1 referringToTableUID:(const UUIDData_5fbc143e *)arg2;
- (void)addCellCoord:(const struct TSUCellCoord *)arg1 referringToTableUID:(const UUIDData_5fbc143e *)arg2;
- (id)description;
- (id)initWithOwnerUID:(const UUIDData_5fbc143e *)arg1;

@end
