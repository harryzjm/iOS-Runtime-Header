//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPSectionedIdentifierListEnumerationResult-Protocol.h>

@class NSString;

@interface _MPSectionedIdentifierListProxyEntry : NSObject <MPSectionedIdentifierListEnumerationResult>
{
    long long _branchDepth;
    long long _entryType;
}

@property(readonly, nonatomic) long long entryType; // @synthesize entryType=_entryType;
@property(readonly, nonatomic) long long branchDepth; // @synthesize branchDepth=_branchDepth;
- (id)trackingEntryResult;
- (id)itemResult;
@property(readonly, copy) NSString *description;
- (id)initWithType:(long long)arg1 branchDepth:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

