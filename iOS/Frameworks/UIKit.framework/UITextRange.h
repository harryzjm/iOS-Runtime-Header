//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class UITextPosition, UITextRangeImpl;

@interface UITextRange : NSObject
{
}

@property(readonly, nonatomic) UITextPosition *end;
@property(readonly, nonatomic) UITextPosition *start;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic, getter=_isImpl) UITextRangeImpl *isImpl;
@property(readonly, nonatomic, getter=_isRanged) _Bool isRanged;
@property(readonly, nonatomic, getter=_isCaret) _Bool isCaret;

@end

