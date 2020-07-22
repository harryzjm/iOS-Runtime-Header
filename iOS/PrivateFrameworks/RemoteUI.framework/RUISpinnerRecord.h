//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UINavigationItem;

@interface RUISpinnerRecord : NSObject
{
    _Bool _hidesBackButton;
    NSArray *_rightItems;
    NSArray *_leftItems;
    UINavigationItem *_navigationItem;
    NSString *_title;
    NSString *_spinningTitle;
}

@property(copy, nonatomic) NSString *spinningTitle; // @synthesize spinningTitle=_spinningTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool hidesBackButton; // @synthesize hidesBackButton=_hidesBackButton;
@property(retain, nonatomic) UINavigationItem *navigationItem; // @synthesize navigationItem=_navigationItem;
@property(copy, nonatomic) NSArray *leftItems; // @synthesize leftItems=_leftItems;
@property(copy, nonatomic) NSArray *rightItems; // @synthesize rightItems=_rightItems;
- (void).cxx_destruct;

@end

