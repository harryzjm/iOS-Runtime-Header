//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, NSAttributedString, UITextRange;

@protocol UITextDraggableGeometrySameViewDropOperation <NSObject>
@property(readonly, nonatomic) unsigned long long operation;
@property(readonly, nonatomic) NSAttributedString *text;
@property(readonly, nonatomic) UITextRange *targetRange;
@property(readonly, nonatomic) NSArray *sourceRanges;
@end
