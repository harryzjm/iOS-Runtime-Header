//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UITextInteractionAssistantGestureState : NSObject
{
    _Bool _hasExternalInteractions;
    _Bool _viewIsEditable;
    _Bool _viewCanBecomeEditable;
    _Bool _isFirstResponder;
    long long _mode;
}

@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool isFirstResponder; // @synthesize isFirstResponder=_isFirstResponder;
@property(nonatomic) _Bool viewCanBecomeEditable; // @synthesize viewCanBecomeEditable=_viewCanBecomeEditable;
@property(nonatomic) _Bool viewIsEditable; // @synthesize viewIsEditable=_viewIsEditable;
@property(nonatomic) _Bool hasExternalInteractions; // @synthesize hasExternalInteractions=_hasExternalInteractions;
- (_Bool)isEqual:(id)arg1;

@end
