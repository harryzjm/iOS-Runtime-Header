//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAccessibilityElement.h>

@interface AX_AvatarCarousel : UIAccessibilityElement
{
    id _messagesController;
}

@property(nonatomic) __weak id messagesController; // @synthesize messagesController=_messagesController;
- (void).cxx_destruct;
- (_Bool)_accessibilitySupportsActivateAction;
- (struct CGRect)accessibilityFrameInContainerSpace;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)_setAXCurrentIndex:(long long)arg1;
- (long long)_axCurrentIndex;
- (_Bool)accessibilityScroll:(long long)arg1;
- (_Bool)_accessibilityScrollCarousel:(_Bool)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (_Bool)_axMessagesControllerIsExpanded;
- (id)_axContainerAvatarController;
- (id)initWithMessagesController:(id)arg1 accessibilityContainer:(id)arg2;

@end

