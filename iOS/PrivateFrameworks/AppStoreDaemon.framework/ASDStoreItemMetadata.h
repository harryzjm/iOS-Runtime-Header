//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface ASDStoreItemMetadata : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_propertiesDictionary;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSDictionary *propertiesDictionary; // @synthesize propertiesDictionary=_propertiesDictionary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)storeTransationID;
- (id)requiredDeviceCapabilities;
@property(readonly, nonatomic) long long storeItemIdentifier;
- (id)cancelDownloadURL;
@property(readonly, nonatomic) NSString *bundleIdentifier;
- (id)initWithDictionary:(id)arg1;

@end

