//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSCopying-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface BBImage : NSObject <NSCopying, NSSecureCoding>
{
    NSData *_data;
    NSString *_path;
    NSString *_name;
    NSString *_bundlePath;
}

+ (_Bool)supportsSecureCoding;
+ (id)imageWithName:(id)arg1 inBundle:(id)arg2;
+ (id)imageWithPath:(id)arg1;
+ (id)imageWithData:(id)arg1;
@property(copy, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithData:(id)arg1 path:(id)arg2 name:(id)arg3 bundlePath:(id)arg4;

@end

