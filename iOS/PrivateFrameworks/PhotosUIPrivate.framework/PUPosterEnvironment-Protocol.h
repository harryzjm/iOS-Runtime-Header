//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@protocol PUPosterEnvironment <NSObject>
@property(readonly, nonatomic) struct CGRect pu_floatingObscurableBounds;
@property(readonly, nonatomic, getter=pu_isCallServices) _Bool pu_callServices;
@property(readonly, nonatomic) unsigned long long pu_significantEventsCounter;
- (struct CGRect)pu_titleBoundsForLayout:(unsigned long long)arg1;
@end

