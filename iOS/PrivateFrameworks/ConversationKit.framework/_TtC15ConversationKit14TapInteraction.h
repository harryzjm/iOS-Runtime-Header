//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ConversationKit/UIInteraction-Protocol.h>

@class MISSING_TYPE, UIView;

__attribute__((visibility("hidden")))
@interface _TtC15ConversationKit14TapInteraction : NSObject <UIInteraction>
{
    MISSING_TYPE *view;
    MISSING_TYPE *tapGestureRecognizer;
}

- (CDUnknownBlockType).cxx_destruct;
- (void)handleRecognizer:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (void)willMoveToView:(id)arg1;
- (id)init;
@property(nonatomic) long long numberOfTapsRequired;
@property(nonatomic) __weak UIView *view; // @synthesize view;

@end
