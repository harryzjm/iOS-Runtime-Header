//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCEGroupByNodeMap : NSObject
{
    struct unordered_map<TSU::UUIDData<TSP::UUIDData>, std::__1::unordered_map<TSU::UUIDData<TSP::UUIDData>, TSCEInternalCellRefSet, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, TSCEInternalCellRefSet>>>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, std::__1::unordered_map<TSU::UUIDData<TSP::UUIDData>, TSCEInternalCellRefSet, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, TSCEInternalCellRefSet>>>>>> _cellRefsByGroupNodeByGroupBy;
    struct unordered_map<TSCEInternalCellReference, std::__1::unordered_set<TSU::UUIDCoord<TSP::UUIDCoord>, std::__1::hash<TSUUuidCoord>, std::__1::equal_to<TSU::UUIDCoord<TSP::UUIDCoord>>, std::__1::allocator<TSU::UUIDCoord<TSP::UUIDCoord>>>, std::__1::hash<TSCEInternalCellReference>, std::__1::equal_to<TSCEInternalCellReference>, std::__1::allocator<std::__1::pair<const TSCEInternalCellReference, std::__1::unordered_set<TSU::UUIDCoord<TSP::UUIDCoord>, std::__1::hash<TSUUuidCoord>, std::__1::equal_to<TSU::UUIDCoord<TSP::UUIDCoord>>, std::__1::allocator<TSU::UUIDCoord<TSP::UUIDCoord>>>>>> _groupNodesByCellRef;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeToArchive:(struct GroupByNodeMapArchive *)arg1;
- (id)initFromArchive:(const struct GroupByNodeMapArchive *)arg1;
- (void)getCellRefs:(struct TSCEReferenceSet *)arg1 inGroupBy:(const UUIDData_5fbc143e *)arg2;
- (void)getCellRefs:(struct TSCEReferenceSet *)arg1 referringToGroupNodes:(const vector_4dc5f307 *)arg2 inGroupBy:(const UUIDData_5fbc143e *)arg3;
- (void)removeAllCellRefsInOwner:(unsigned short)arg1;
- (void)removeCellRef:(const struct TSCEInternalCellReference *)arg1;
- (void)removeCellRef:(const struct TSCEInternalCellReference *)arg1 usingCategoryRef:(const struct TSCECategoryRef *)arg2;
- (void)addCellRef:(const struct TSCEInternalCellReference *)arg1 usingCategoryRef:(const struct TSCECategoryRef *)arg2;
- (id)description;

@end

