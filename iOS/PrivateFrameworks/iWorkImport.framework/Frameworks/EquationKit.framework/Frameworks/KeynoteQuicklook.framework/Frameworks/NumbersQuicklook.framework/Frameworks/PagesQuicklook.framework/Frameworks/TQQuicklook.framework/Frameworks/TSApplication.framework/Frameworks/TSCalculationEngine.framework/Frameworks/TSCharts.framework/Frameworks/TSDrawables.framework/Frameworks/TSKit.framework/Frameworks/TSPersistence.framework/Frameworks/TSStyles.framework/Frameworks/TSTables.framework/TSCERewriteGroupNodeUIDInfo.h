//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSCERewriteGroupNodeUIDInfo : NSObject
{
    struct TSKUIDStruct _groupByUid;
    struct TSKUIDStructMap _groupNodeUIDMap;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)saveToMessage:(void *)arg1;
- (id)initFromMessage:(const void *)arg1;
- (id)description;
- (const void *)groupNodeUIDMap;
- (TSKUIDStructVectorTemplate_de88e035)originalGroupNodeUIDs;
- (const struct TSKUIDStruct *)groupByUid;
- (id)initWithGroupByUid:(const struct TSKUIDStruct *)arg1 groupNodeUIDMap:(const void *)arg2;

@end

