//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString, NSURL;

@interface EKAttachment
{
}

+ (Class)frozenClass;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)semanticIdentifier;
- (long long)compareFileNames:(id)arg1;
- (void)setExternalId:(id)arg1;
- (id)externalId;
- (void)setXPropertiesData:(id)arg1;
- (id)XPropertiesData;
@property(readonly, nonatomic) NSString *UUID;
@property(readonly, nonatomic) NSNumber *fileSize;
- (void)setFileSizeRaw:(id)arg1;
- (id)fileSizeRaw;
- (void)setLocalURL:(id)arg1;
@property(readonly, nonatomic) NSURL *localURL;
- (void)setIsBinary:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isBinary;
- (void)setFileFormat:(id)arg1;
@property(readonly, nonatomic) NSString *fileFormat;
- (void)setFileNameRaw:(id)arg1;
@property(readonly, nonatomic) NSString *fileName;
- (id)fileNameRaw;
- (void)setURL:(id)arg1;
@property(readonly, nonatomic) NSURL *URL;

@end

