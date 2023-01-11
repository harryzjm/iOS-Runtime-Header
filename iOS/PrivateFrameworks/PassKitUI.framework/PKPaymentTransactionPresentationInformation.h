//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface PKPaymentTransactionPresentationInformation : NSObject
{
    _Bool _shouldGrayValue;
    _Bool _shouldStrikeValue;
    _Bool _shouldShowDisclosure;
    NSString *_primaryString;
    NSString *_secondaryString;
    NSString *_tertiaryString;
    UIColor *_customSecondaryColor;
    NSString *_rewardsString;
    NSString *_valueString;
}

@property(nonatomic) _Bool shouldShowDisclosure; // @synthesize shouldShowDisclosure=_shouldShowDisclosure;
@property(nonatomic) _Bool shouldStrikeValue; // @synthesize shouldStrikeValue=_shouldStrikeValue;
@property(nonatomic) _Bool shouldGrayValue; // @synthesize shouldGrayValue=_shouldGrayValue;
@property(retain, nonatomic) NSString *valueString; // @synthesize valueString=_valueString;
@property(retain, nonatomic) NSString *rewardsString; // @synthesize rewardsString=_rewardsString;
@property(retain, nonatomic) UIColor *customSecondaryColor; // @synthesize customSecondaryColor=_customSecondaryColor;
@property(retain, nonatomic) NSString *tertiaryString; // @synthesize tertiaryString=_tertiaryString;
@property(retain, nonatomic) NSString *secondaryString; // @synthesize secondaryString=_secondaryString;
@property(retain, nonatomic) NSString *primaryString; // @synthesize primaryString=_primaryString;
- (void).cxx_destruct;

@end
