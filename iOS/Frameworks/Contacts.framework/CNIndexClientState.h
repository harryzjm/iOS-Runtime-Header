//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNChangeHistoryAnchor;

__attribute__((visibility("hidden")))
@interface CNIndexClientState : NSObject
{
    _Bool _isFullSyncDone;
    long long _indexVersion;
    CNChangeHistoryAnchor *_fullSyncSnapshotAnchor;
    long long _fullSyncOffset;
}

+ (_Bool)supportsSecureCoding;
+ (id)clientStateWithData:(id)arg1 logger:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long fullSyncOffset; // @synthesize fullSyncOffset=_fullSyncOffset;
@property(retain, nonatomic) CNChangeHistoryAnchor *fullSyncSnapshotAnchor; // @synthesize fullSyncSnapshotAnchor=_fullSyncSnapshotAnchor;
@property(nonatomic) _Bool isFullSyncDone; // @synthesize isFullSyncDone=_isFullSyncDone;
@property(nonatomic) long long indexVersion; // @synthesize indexVersion=_indexVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)data;
- (id)init;

@end

