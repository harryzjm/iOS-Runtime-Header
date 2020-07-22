//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Photos/NSCopying-Protocol.h>

@class NSString;

@interface PHAssetResourceCreationOptions : NSObject <NSCopying>
{
    _Bool _shouldMoveFile;
    NSString *_originalFilename;
    NSString *_uniformTypeIdentifier;
}

@property(nonatomic) _Bool shouldMoveFile; // @synthesize shouldMoveFile=_shouldMoveFile;
@property(copy, nonatomic) NSString *uniformTypeIdentifier; // @synthesize uniformTypeIdentifier=_uniformTypeIdentifier;
@property(copy, nonatomic) NSString *originalFilename; // @synthesize originalFilename=_originalFilename;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)propertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)arg1;

@end

