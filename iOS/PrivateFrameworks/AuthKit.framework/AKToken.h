//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface AKToken : NSObject
{
    NSDate *_expirationDate;
    NSString *_stringValue;
    NSString *_name;
}

+ (id)tokenWithBase64String:(id)arg1;
+ (id)tokenWithValue:(id)arg1 lifetime:(id)arg2;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void).cxx_destruct;

@end

