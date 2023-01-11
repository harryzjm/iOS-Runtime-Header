//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSTGroupNode;

__attribute__((visibility("hidden")))
@interface TSTGroupByChangeDelayedNotification : NSObject
{
    int _notifyType;
    TSTGroupNode *_groupNode;
    UUIDData_5fbc143e _rowUID;
}

@property(nonatomic) UUIDData_5fbc143e rowUID; // @synthesize rowUID=_rowUID;
@property(retain, nonatomic) TSTGroupNode *groupNode; // @synthesize groupNode=_groupNode;
@property(nonatomic) int notifyType; // @synthesize notifyType=_notifyType;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (void)sendToDistributor:(id)arg1;
- (id)initWithNotifyType:(int)arg1 group:(id)arg2 rowUid:(const UUIDData_5fbc143e *)arg3;
- (id)initWithNotifyType:(int)arg1 group:(id)arg2;

@end

