//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@protocol _CPPunchoutForFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *urls;
@property(readonly, nonatomic) _Bool hasLabel;
@property(copy, nonatomic) NSString *label;
@property(readonly, nonatomic) _Bool hasBundleIdentifier;
@property(copy, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic) _Bool hasName;
@property(copy, nonatomic) NSString *name;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)urlsAtIndex:(unsigned long long)arg1;
- (unsigned long long)urlsCount;
- (void)addUrls:(NSString *)arg1;
- (void)clearUrls;
@end
