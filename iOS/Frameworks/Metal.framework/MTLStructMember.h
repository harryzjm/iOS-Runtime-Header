//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface MTLStructMember : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (id)indirectArgumentType;
- (id)pointerType;
- (id)textureReferenceType;
- (id)arrayType;
- (id)structType;

// Remaining properties
@property(readonly) unsigned long long argumentIndex; // @dynamic argumentIndex;
@property(readonly) unsigned long long dataType; // @dynamic dataType;
@property(readonly) NSString *name; // @dynamic name;
@property(readonly) unsigned long long offset; // @dynamic offset;

@end

