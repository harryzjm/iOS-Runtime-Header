//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

@interface MPModelForYouRecommendationsRequest
{
    NSURL *_customForYouURL;
}

+ (id)allSupportedSectionProperties;
+ (id)allSupportedItemProperties;
@property(copy, nonatomic) NSURL *customForYouURL; // @synthesize customForYouURL=_customForYouURL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;

@end

