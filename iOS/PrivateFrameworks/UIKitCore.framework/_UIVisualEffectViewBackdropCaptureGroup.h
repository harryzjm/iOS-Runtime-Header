//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPointerArray, NSString;

@interface _UIVisualEffectViewBackdropCaptureGroup : NSObject
{
    NSPointerArray *_backdrops;
    _Bool _disableInPlaceFiltering;
    NSString *_groupName;
    double _scale;
    double _minimumScale;
}

@property(nonatomic) _Bool disableInPlaceFiltering; // @synthesize disableInPlaceFiltering=_disableInPlaceFiltering;
@property(nonatomic) double minimumScale; // @synthesize minimumScale=_minimumScale;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (void).cxx_destruct;
- (id)description;
- (_Bool)_allowInPlaceFiltering;
- (void)_applyScaleHint:(double)arg1;
- (void)updateAllBackdropViews;
- (void)removeBackdrop:(id)arg1 update:(_Bool)arg2;
- (void)addBackdrop:(id)arg1 update:(_Bool)arg2;
- (long long)indexOfBackdropView:(id)arg1;
- (id)initWithBackdrop:(id)arg1;
- (id)init;

@end

