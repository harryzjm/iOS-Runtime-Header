//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, NSString;

@interface SAAssistantLoaded
{
}

+ (id)assistantLoadedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)assistantLoaded;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *version;
@property(copy, nonatomic) NSArray *syncAnchors;
@property(copy, nonatomic) NSNumber *requestSync;
@property(copy, nonatomic) NSString *dataAnchor;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

