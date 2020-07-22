//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Network/NWPrettyDescription-Protocol.h>

@class NSString, NWInterface;
@protocol OS_nw_browse_descriptor;

@interface NWBrowseDescriptor : NSObject <NWPrettyDescription>
{
    NSObject<OS_nw_browse_descriptor> *_internalDescriptor;
}

+ (id)descriptorWithProtocolBufferData:(id)arg1;
+ (_Bool)supportsBrowseCallback;
+ (id)descriptorWithInternalDescriptor:(id)arg1;
+ (Class)copyClassForDescriptorType:(int)arg1;
+ (unsigned int)descriptorType;
@property(retain, nonatomic) NSObject<OS_nw_browse_descriptor> *internalDescriptor; // @synthesize internalDescriptor=_internalDescriptor;
- (void).cxx_destruct;
- (id)createProtocolBufferObject;
- (id)encodedData;
- (id)initWithEncodedData:(id)arg1;
- (void)browseWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NWInterface *interface;
@property(readonly, copy, nonatomic) NSString *privateDescription;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDescriptor:(id)arg1;

@end

