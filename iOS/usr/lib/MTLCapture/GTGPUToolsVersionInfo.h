//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MTLCapture/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface GTGPUToolsVersionInfo : NSObject <NSSecureCoding>
{
    NSDictionary *_infoPlist;
    NSDictionary *_versionPlist;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int interposeVersionMetal;
@property(readonly, nonatomic) unsigned int interposeVersionGL;
@property(readonly, nonatomic) NSString *sourceVersion;
@property(readonly, nonatomic) NSString *shortVersion;
@property(readonly, nonatomic) NSString *version;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
