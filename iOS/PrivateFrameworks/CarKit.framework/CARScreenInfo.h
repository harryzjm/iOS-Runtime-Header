//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CARScreenViewArea, NSArray, NSDictionary, NSString, NSURL;

@interface CARScreenInfo : NSObject
{
    _Bool _limitedUI;
    _Bool _nightMode;
    _Bool _supportsHighFidelityTouch;
    _Bool _wantsCornerMasks;
    _Bool _initialFocusOwner;
    _Bool _supportsAppearanceMode;
    _Bool _supportsPerDisplayNightMode;
    _Bool _supportsMapAppearanceMode;
    NSString *_identifier;
    unsigned long long _screenType;
    unsigned long long _limitedUIElements;
    unsigned long long _maxFramesPerSecond;
    NSArray *_viewAreas;
    CARScreenViewArea *_currentViewArea;
    CARScreenViewArea *_adjacentViewArea;
    unsigned long long _currentViewAreaTransitionControlType;
    NSURL *_initialURL;
    unsigned long long _systemAvailableInteractionModels;
    unsigned long long _systemPrimaryInteractionModel;
    NSDictionary *_screenInfoResponse;
    struct CGSize _physicalSize;
    struct CGSize _pixelSize;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *screenInfoResponse; // @synthesize screenInfoResponse=_screenInfoResponse;
@property(nonatomic) _Bool supportsMapAppearanceMode; // @synthesize supportsMapAppearanceMode=_supportsMapAppearanceMode;
@property(nonatomic) _Bool supportsPerDisplayNightMode; // @synthesize supportsPerDisplayNightMode=_supportsPerDisplayNightMode;
@property(nonatomic) _Bool supportsAppearanceMode; // @synthesize supportsAppearanceMode=_supportsAppearanceMode;
@property(nonatomic) _Bool initialFocusOwner; // @synthesize initialFocusOwner=_initialFocusOwner;
@property(nonatomic) _Bool wantsCornerMasks; // @synthesize wantsCornerMasks=_wantsCornerMasks;
@property(nonatomic) unsigned long long systemPrimaryInteractionModel; // @synthesize systemPrimaryInteractionModel=_systemPrimaryInteractionModel;
@property(nonatomic) unsigned long long systemAvailableInteractionModels; // @synthesize systemAvailableInteractionModels=_systemAvailableInteractionModels;
@property(readonly, nonatomic) NSURL *initialURL; // @synthesize initialURL=_initialURL;
@property(nonatomic) unsigned long long currentViewAreaTransitionControlType; // @synthesize currentViewAreaTransitionControlType=_currentViewAreaTransitionControlType;
@property(retain, nonatomic) CARScreenViewArea *adjacentViewArea; // @synthesize adjacentViewArea=_adjacentViewArea;
@property(retain, nonatomic) CARScreenViewArea *currentViewArea; // @synthesize currentViewArea=_currentViewArea;
@property(readonly, copy, nonatomic) NSArray *viewAreas; // @synthesize viewAreas=_viewAreas;
@property(readonly, nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
@property(readonly, nonatomic) struct CGSize physicalSize; // @synthesize physicalSize=_physicalSize;
@property(readonly, nonatomic) unsigned long long maxFramesPerSecond; // @synthesize maxFramesPerSecond=_maxFramesPerSecond;
@property(readonly, nonatomic) _Bool supportsHighFidelityTouch; // @synthesize supportsHighFidelityTouch=_supportsHighFidelityTouch;
@property(readonly, nonatomic, getter=isNightMode) _Bool nightMode; // @synthesize nightMode=_nightMode;
@property(readonly, nonatomic) unsigned long long limitedUIElements; // @synthesize limitedUIElements=_limitedUIElements;
@property(readonly, nonatomic, getter=isLimitedUI) _Bool limitedUI; // @synthesize limitedUI=_limitedUI;
@property(readonly, nonatomic) unsigned long long screenType; // @synthesize screenType=_screenType;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)limitedUIChanged:(_Bool)arg1;
- (void)nightModeChanged:(_Bool)arg1;
- (id)description;
@property(readonly, nonatomic) unsigned long long availableInteractionModels;
@property(readonly, nonatomic) unsigned long long primaryInteractionModel;
- (_Bool)_currentProcessHasEntitlement;
- (id)_descriptionForInteractionModel:(unsigned long long)arg1;
- (id)descriptionForPrimaryInteractionModel;
- (id)descriptionForAvailableInteractionModels;
- (id)initWithPropertySupplier:(CDUnknownBlockType)arg1 screenType:(unsigned long long)arg2 additionalInsets:(struct NSEdgeInsets)arg3 displayDictionary:(id)arg4;
- (id)initWithPropertySupplier:(CDUnknownBlockType)arg1 screenType:(unsigned long long)arg2;

@end
