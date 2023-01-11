//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoSkipPolicy-Protocol.h>

@class NSString;
@protocol SVContentTransitionTypeProviding;

@interface SVPlaylistSkipPolicyHandler : NSObject <SVVideoSkipPolicy>
{
    id <SVContentTransitionTypeProviding> _contentTransitionTypeProvider;
}

@property(readonly, nonatomic) id <SVContentTransitionTypeProviding> contentTransitionTypeProvider; // @synthesize contentTransitionTypeProvider=_contentTransitionTypeProvider;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool canSkip;
- (id)initWithContentTransitionTypeProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
