//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMediaStream/NSCopying-Protocol.h>

@class MSASAlbum, NSString;
@protocol NSObject;

@interface MSASPersonModelItem : NSObject <NSCopying>
{
    int _errorCount;
    MSASAlbum *_album;
    NSString *_albumGUID;
    id <NSObject> _object;
}

@property(retain, nonatomic) id <NSObject> object; // @synthesize object=_object;
@property(retain, nonatomic) NSString *albumGUID; // @synthesize albumGUID=_albumGUID;
@property(retain, nonatomic) MSASAlbum *album; // @synthesize album=_album;
@property(nonatomic) int errorCount; // @synthesize errorCount=_errorCount;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;

@end
