//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FileProvider/NSSecureCoding-Protocol.h>

@class NSData;

@interface NSFileProviderItemVersion : NSObject <NSSecureCoding>
{
    NSData *_contentVersion;
    NSData *_metadataVersion;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *metadataVersion; // @synthesize metadataVersion=_metadataVersion;
@property(readonly, nonatomic) NSData *contentVersion; // @synthesize contentVersion=_contentVersion;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEmpty;
- (id)init;
- (id)initWithContentVersion:(id)arg1 metadataVersion:(id)arg2;

@end
