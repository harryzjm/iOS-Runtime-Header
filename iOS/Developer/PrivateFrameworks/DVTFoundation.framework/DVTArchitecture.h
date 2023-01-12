//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DVTFoundation/NSCopying-Protocol.h>

@class NSString;

@interface DVTArchitecture : NSObject <NSCopying>
{
    _Bool _is64Bit;
    int _CPUType;
    int _CPUSubType;
    NSString *_canonicalName;
    NSString *_displayName;
}

+ (id)architectureWithCPUType:(int)arg1 subType:(int)arg2;
+ (id)architectureWithCanonicalName:(id)arg1;
+ (id)allArchitectures;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly) _Bool is64Bit; // @synthesize is64Bit=_is64Bit;
@property(readonly) int CPUSubType; // @synthesize CPUSubType=_CPUSubType;
@property(readonly) int CPUType; // @synthesize CPUType=_CPUType;
@property(readonly, copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy) NSString *canonicalName; // @synthesize canonicalName=_canonicalName;
- (_Bool)matchesCPUType:(int)arg1 andSubType:(int)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithExtension:(id)arg1;
- (id)initWithCanonicalName:(id)arg1 displayName:(id)arg2 CPUType:(int)arg3 CPUSubType:(int)arg4 is64Bit:(_Bool)arg5;

@end
