//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PKPaymentSetupProductSection : NSObject
{
    NSString *_localizedTitle;
    NSArray *_categories;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end
