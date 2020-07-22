//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL, NSUUID;

@interface MCMContainer : NSObject
{
    unsigned int _userId;
    NSString *_identifier;
    NSUUID *_uuid;
    long long _containerClass;
    struct container_object *_thisContainer;
}

+ (id)temporaryContainerWithIdentifier:(id)arg1 existed:(_Bool *)arg2 error:(id *)arg3;
+ (id)containerWithIdentifier:(id)arg1 createIfNecessary:(_Bool)arg2 existed:(_Bool *)arg3 error:(id *)arg4;
+ (id)containerWithIdentifier:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)diskUsageWithError:(id *)arg1;
@property(readonly, nonatomic) long long containerClass;
@property(readonly, nonatomic) NSUUID *uuid; // @dynamic uuid;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic, getter=isTemporary) _Bool temporary;
@property(readonly, nonatomic) NSDictionary *info;
@property(readonly, nonatomic) NSURL *url;
- (_Bool)regenerateDirectoryUUIDWithError:(id *)arg1;
- (_Bool)recreateDefaultStructureWithError:(id *)arg1;
- (id)infoValueForKey:(id)arg1 error:(id *)arg2;
- (_Bool)setInfoValue:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)destroyContainerWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithIdentifier:(id)arg1 createIfNecessary:(_Bool)arg2 existed:(_Bool *)arg3 temp:(_Bool)arg4 error:(id *)arg5;
- (id)init;
- (struct container_object *)getLowLevelContainerObject;
- (void)markDeleted;
- (id)initWithIdentifier:(id)arg1 userId:(unsigned int)arg2 uuid:(id)arg3 containerClass:(long long)arg4 error:(id *)arg5;
- (long long)_getContainerClass;
- (void)dealloc;
- (void)_errorOccurred;

@end

