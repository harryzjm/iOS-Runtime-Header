//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardUI/SBSceneHandleObserverToken-Protocol.h>

@class NSMutableDictionary, NSString;

@interface _SBSceneHandleObserverToken : NSObject <SBSceneHandleObserverToken>
{
    NSMutableDictionary *_owner;
}

@property(readonly, nonatomic) __weak NSMutableDictionary *owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOwner:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

