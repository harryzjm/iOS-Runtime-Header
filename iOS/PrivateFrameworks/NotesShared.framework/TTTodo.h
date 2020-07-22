//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NotesShared/NSCopying-Protocol.h>

@class NSUUID;

@interface TTTodo : NSObject <NSCopying>
{
    _Bool _done;
    NSUUID *_uuid;
}

+ (id)todoWithIdentifier:(id)arg1 done:(_Bool)arg2;
@property(readonly, nonatomic) _Bool done; // @synthesize done=_done;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)todoWithDone:(_Bool)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1 done:(_Bool)arg2;
- (id)serialize;
- (void)saveToArchive:(struct Todo *)arg1;
- (id)initWithArchive:(const struct Todo *)arg1;
- (id)initWithData:(id)arg1;

@end

