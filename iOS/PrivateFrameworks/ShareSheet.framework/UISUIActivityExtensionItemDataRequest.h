//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ShareSheet/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, NSUUID;

@interface UISUIActivityExtensionItemDataRequest : NSObject <NSSecureCoding>
{
    _Bool _wantsThumbnailItemData;
    _Bool _wantsAttachmentURLItemData;
    _Bool _isAirDropActivity;
    _Bool _activitySupportsPromiseURLs;
    _Bool _sourceAppIsManaged;
    Class _classForPreparingExtensionItemData;
    NSUUID *_activityUUID;
    NSString *_activityType;
    long long _activityCategory;
    long long _maxPreviews;
    NSString *_extensionIdentifier;
    NSDictionary *_activitySpecificMetadata;
    struct CGSize _thumbnailSize;
}

+ (_Bool)supportsSecureCoding;
+ (id)requestForActivity:(id)arg1 activityType:(id)arg2 activitySpecificMetadata:(id)arg3;
+ (id)requestForActivity:(id)arg1 activityType:(id)arg2 sourceAppIsManaged:(_Bool)arg3;
+ (id)requestForActivity:(id)arg1 activityType:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool sourceAppIsManaged; // @synthesize sourceAppIsManaged=_sourceAppIsManaged;
@property(retain, nonatomic) NSDictionary *activitySpecificMetadata; // @synthesize activitySpecificMetadata=_activitySpecificMetadata;
@property(nonatomic) _Bool activitySupportsPromiseURLs; // @synthesize activitySupportsPromiseURLs=_activitySupportsPromiseURLs;
@property(nonatomic) _Bool isAirDropActivity; // @synthesize isAirDropActivity=_isAirDropActivity;
@property(nonatomic) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(nonatomic) long long maxPreviews; // @synthesize maxPreviews=_maxPreviews;
@property(nonatomic) _Bool wantsAttachmentURLItemData; // @synthesize wantsAttachmentURLItemData=_wantsAttachmentURLItemData;
@property(nonatomic) _Bool wantsThumbnailItemData; // @synthesize wantsThumbnailItemData=_wantsThumbnailItemData;
@property(nonatomic) long long activityCategory; // @synthesize activityCategory=_activityCategory;
@property(retain, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(retain, nonatomic) NSUUID *activityUUID; // @synthesize activityUUID=_activityUUID;
@property(readonly, nonatomic) Class classForPreparingExtensionItemData; // @synthesize classForPreparingExtensionItemData=_classForPreparingExtensionItemData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithClassForPreparingExtensionItemData:(Class)arg1;

@end
