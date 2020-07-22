//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AccessibilityUIService/AXUIAlertStyleProvider-Protocol.h>

@class NSBundle, NSString;

@interface AXUIAlertStyleProvider : NSObject <AXUIAlertStyleProvider>
{
    NSBundle *_bundle;
}

+ (id)styleProvider;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (void).cxx_destruct;
- (double)alertFadeAnimationDurationForType:(unsigned long long)arg1;
- (int)alertPositionForType:(unsigned long long)arg1;
- (struct UIEdgeInsets)alertEdgeInsetsForType:(unsigned long long)arg1;
- (struct UIEdgeInsets)alertIconImageEdgeInsetsForType:(unsigned long long)arg1;
- (double)alertSubtitleTextVerticalSpacingHeightWithTextForType:(unsigned long long)arg1;
- (double)alertSubtitleTextLineHeightOffsetForType:(unsigned long long)arg1;
- (id)alertSubtitleTextColorForType:(unsigned long long)arg1;
- (id)alertSubtitleTextFontForType:(unsigned long long)arg1;
- (double)alertTextLineHeightOffsetForType:(unsigned long long)arg1;
- (id)alertTextColorForType:(unsigned long long)arg1;
- (id)alertTextFontForType:(unsigned long long)arg1;
- (struct UIEdgeInsets)alertContentEdgeInsetsForType:(unsigned long long)arg1;
- (_Bool)alertShouldGrowInAxis:(long long)arg1 forType:(unsigned long long)arg2;
- (struct CGSize)alertBackgroundSizeForType:(unsigned long long)arg1;
- (double)alertBackgroundCornerRadiusForType:(unsigned long long)arg1;
- (int)alertBackgroundStyleForType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

