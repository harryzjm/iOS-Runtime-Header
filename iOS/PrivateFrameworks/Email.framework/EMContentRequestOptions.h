//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Email/NSSecureCoding-Protocol.h>

@class NSString;

@interface EMContentRequestOptions : NSObject <NSSecureCoding>
{
    _Bool _includeSuggestionItems;
    NSString *_requestedRepresentation;
    long long _networkUsage;
}

+ (_Bool)supportsSecureCoding;
+ (id)optionsWithRequestedRepresentationType:(id)arg1 networkUsage:(long long)arg2 includeSuggestionItems:(_Bool)arg3;
+ (id)optionsWithRequestedRepresentationType:(id)arg1 networkUsage:(long long)arg2;
@property(readonly, nonatomic) _Bool includeSuggestionItems; // @synthesize includeSuggestionItems=_includeSuggestionItems;
@property(nonatomic) long long networkUsage; // @synthesize networkUsage=_networkUsage;
@property(copy, nonatomic) NSString *requestedRepresentation; // @synthesize requestedRepresentation=_requestedRepresentation;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)debugDescription;
- (id)initWithRequestedRepresentationType:(id)arg1 networkUsage:(long long)arg2 includeSuggestionItems:(_Bool)arg3;
- (id)init;

@end
