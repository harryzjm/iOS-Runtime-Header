//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIContextMenuInteraction.h"

__attribute__((visibility("hidden")))
@interface _UIVariableGestureContextMenuInteraction : UIContextMenuInteraction
{
    struct {
        unsigned int presentOnTouchDown:1;
    } _flags;
    _Bool __prefersCompactAppearance;
    id __proxySender;
}

- (void).cxx_destruct;
@property(nonatomic, setter=_setPrefersCompactAppearance:) _Bool _prefersCompactAppearance; // @synthesize _prefersCompactAppearance=__prefersCompactAppearance;
@property(nonatomic, setter=_setProxySender:) __weak id _proxySender; // @synthesize _proxySender=__proxySender;
- (_Bool)_clickPresentationInteractionShouldPlayFeedback:(id)arg1;
- (void)_willBeginWithConfiguration:(id)arg1;
@property(nonatomic, setter=_setPresentOnTouchDown:) _Bool _presentOnTouchDown;
- (long long)menuAppearance;
- (id)_interactionDrivers;
- (void)didMoveToView:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

