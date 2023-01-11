//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAccessibilityElement.h>

#import <AccessibilityPlatformTranslation/AXPTranslationElementProtocol-Protocol.h>

@class AXPTranslationObject, NSString;

@interface AXPIOSPlatformElement : UIAccessibilityElement <AXPTranslationElementProtocol>
{
    AXPTranslationObject *translation;
}

+ (id)platformElementWithTranslationObject:(id)arg1;
+ (id)platformElementWithTranslationObject:(id)arg1 rootParent:(id)arg2;
@property(retain, nonatomic) AXPTranslationObject *translation; // @synthesize translation;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

