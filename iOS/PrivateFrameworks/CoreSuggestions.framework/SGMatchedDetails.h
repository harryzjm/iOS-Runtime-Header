//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>
#import <CoreSuggestions/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

@interface SGMatchedDetails : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_tokenDetailMap;
    NSMutableDictionary *_detailTokenMap;
}

+ (id)matchedDetailsWithContact:(id)arg1 matchinfoData:(id)arg2 tokens:(id)arg3;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToMatchedDetails:(id)arg1;
- (id)_contactDetailFromContact:(id)arg1 column:(unsigned int)arg2 detailEntityId:(id)arg3;
- (void)_processRawData:(id)arg1 tokens:(id)arg2 contact:(id)arg3;
- (id)tokensForDetail:(id)arg1;
- (id)matchedDetailsForToken:(id)arg1;
- (id)initWithContact:(id)arg1 matchinfoData:(id)arg2 tokens:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
