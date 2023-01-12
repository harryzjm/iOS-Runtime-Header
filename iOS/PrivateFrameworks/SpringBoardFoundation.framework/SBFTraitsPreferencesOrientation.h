//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/BSDescriptionProviding-Protocol.h>
#import <SpringBoardFoundation/NSCopying-Protocol.h>
#import <SpringBoardFoundation/NSMutableCopying-Protocol.h>

@class NSString;

@interface SBFTraitsPreferencesOrientation : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>
{
    unsigned long long _supportedOrientations;
    long long _preferredOrientation;
    _Bool _canDetermineActiveOrientation;
}

@property(nonatomic) long long preferredOrientation; // @synthesize preferredOrientation=_preferredOrientation;
@property(nonatomic) unsigned long long supportedOrientations; // @synthesize supportedOrientations=_supportedOrientations;
@property(nonatomic) _Bool canDetermineActiveOrientation; // @synthesize canDetermineActiveOrientation=_canDetermineActiveOrientation;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToOrientationPreferences:(id)arg1;
- (id)init;
- (id)initWithOrientationPreferences:(id)arg1;
- (id)initWithSupportedMask:(unsigned long long)arg1 preferred:(long long)arg2 determinesActiveOrientation:(_Bool)arg3;
- (id)initWithSupportedMask:(unsigned long long)arg1 determinesActiveOrientation:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
