//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/UITextInputTraits-Protocol.h>

@class NSString;

@protocol UIKeyInput <UITextInputTraits>
@property(readonly, nonatomic) _Bool hasText;
- (void)deleteBackward;
- (void)insertText:(NSString *)arg1;
@end

