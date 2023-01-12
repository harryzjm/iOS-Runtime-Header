//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PeopleSuggester/NSCopying-Protocol.h>
#import <PeopleSuggester/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface _PSConfidenceModelArchive : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_confidenceModelDictionary;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *confidenceModelDictionary; // @synthesize confidenceModelDictionary=_confidenceModelDictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfidenceModelDictionary:(id)arg1;

@end
