//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ShazamKit/NSCopying-Protocol.h>

@class NSData;

@interface SHLibraryItemMetadata : NSObject <NSCopying>
{
    NSData *_encodedSystemData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *encodedSystemData; // @synthesize encodedSystemData=_encodedSystemData;
- (_Bool)validEncodedSystemData:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEncodedSystemData:(id)arg1;

@end
