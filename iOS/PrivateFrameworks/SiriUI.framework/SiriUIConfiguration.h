//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriUI/NSCopying-Protocol.h>

@interface SiriUIConfiguration : NSObject <NSCopying>
{
    _Bool _isSystemHostedPresentation;
    _Bool _allowResizingBetweenModes;
    long long _flamesViewFidelity;
    long long _siriViewMode;
}

@property(readonly, nonatomic) long long siriViewMode; // @synthesize siriViewMode=_siriViewMode;
@property(readonly, nonatomic) _Bool allowResizingBetweenModes; // @synthesize allowResizingBetweenModes=_allowResizingBetweenModes;
@property(readonly, nonatomic) _Bool isSystemHostedPresentation; // @synthesize isSystemHostedPresentation=_isSystemHostedPresentation;
@property(readonly, nonatomic) long long flamesViewFidelity; // @synthesize flamesViewFidelity=_flamesViewFidelity;
- (id)_NSStringFromSiriViewMode:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithFlamesViewFidelity:(long long)arg1 isSystemHostedPresentation:(_Bool)arg2 allowResizingBetweenModes:(_Bool)arg3 siriViewMode:(long long)arg4;
- (id)initWithFlamesViewFidelity:(long long)arg1 isSystemHostedPresentation:(_Bool)arg2;
- (id)init;

@end
