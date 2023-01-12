//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSSet, PKScribbleInteraction, UIEvent;
@protocol NSObject><NSCopying;

@protocol PKScribbleInteractionDelegate <NSObject>

@optional
- (_Bool)_scribbleInteraction:(PKScribbleInteraction *)arg1 isEditableElement:(id <NSObject><NSCopying>)arg2;
- (void)_scribbleInteraction:(PKScribbleInteraction *)arg1 endSuppressingPlaceholderForElement:(id <NSObject><NSCopying>)arg2;
- (void)_scribbleInteraction:(PKScribbleInteraction *)arg1 beginSuppressingPlaceholderForElement:(id <NSObject><NSCopying>)arg2;
- (void)_scribbleInteraction:(PKScribbleInteraction *)arg1 didFinishWritingInElement:(id <NSObject><NSCopying>)arg2;
- (void)_scribbleInteraction:(PKScribbleInteraction *)arg1 willBeginWritingInElement:(id <NSObject><NSCopying>)arg2;
- (_Bool)_scribbleInteraction:(PKScribbleInteraction *)arg1 focusWillTransformElement:(id <NSObject><NSCopying>)arg2;
- (struct UIEdgeInsets)_scribbleInteraction:(PKScribbleInteraction *)arg1 hitToleranceInsetsForElement:(id <NSObject><NSCopying>)arg2 defaultInsets:(struct UIEdgeInsets)arg3;
- (void)_scribbleInteraction:(PKScribbleInteraction *)arg1 didTargetElement:(id <NSObject><NSCopying>)arg2 forTouches:(NSSet *)arg3 event:(UIEvent *)arg4;
- (_Bool)_pkScribbleInteractionShouldDisableInputAssistant:(PKScribbleInteraction *)arg1;
- (_Bool)_scribbleInteractionIsEnabled:(PKScribbleInteraction *)arg1;
- (_Bool)_scribbleInteraction:(PKScribbleInteraction *)arg1 shouldBeginAtLocation:(struct CGPoint)arg2;
@end

