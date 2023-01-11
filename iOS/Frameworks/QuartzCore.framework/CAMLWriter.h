//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol CAMLWriterDelegate;

@interface CAMLWriter : NSObject
{
    struct _CAMLWriterPriv *_priv;
}

+ (id)writerWithData:(id)arg1;
- (void)dealloc;
- (void)_writeElementTree:(struct _CAMLWriterElement *)arg1;
- (void)endElement;
- (id)URLStringForResource:(id)arg1;
- (void)setElementContent:(id)arg1;
- (void)setElementAttribute:(id)arg1 forKey:(id)arg2;
- (void)beginPropertyElement:(id)arg1;
- (void)beginElement:(unsigned int)arg1;
- (void)encodeObject:(id)arg1 conditionally:(_Bool)arg2;
- (void)encodeObject:(id)arg1;
@property __weak id <CAMLWriterDelegate> delegate;
@property(retain) NSURL *baseURL;
- (id)initWithData:(id)arg1;

@end

