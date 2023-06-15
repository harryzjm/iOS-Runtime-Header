//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, RFOptionalFloat, RFRGBValue;

@protocol RFColor <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(retain, nonatomic) RFOptionalFloat *alpha;
@property(nonatomic) int name;
@property(retain, nonatomic) RFRGBValue *rgb_value;
@end

