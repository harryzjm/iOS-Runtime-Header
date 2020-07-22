//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/TSTTableHeaderStorage-Protocol.h>

@class NSString;

@interface TSTTableHeaderStorageBucket <TSTTableHeaderStorage>
{
    struct map<unsigned int, SFUtility::ObjcSharedPtr<NSObject>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSObject>>>> *mMap;
    double mHorizontalScaleFactor;
}

@property(nonatomic) double horizontalScaleFactor; // @synthesize horizontalScaleFactor=mHorizontalScaleFactor;
- (unsigned int)lowerBound:(unsigned int)arg1;
- (unsigned int)upperBound:(unsigned int)arg1;
- (unsigned int)maxKey;
- (unsigned int)minKey;
- (long long)count;
- (void)shiftKeysAtIndex:(unsigned int)arg1 amount:(int)arg2;
- (void)applyFunction:(CDUnknownFunctionPointerType)arg1 withState:(void *)arg2 willModify:(_Bool)arg3;
- (void)makeHeadersPerformSelector:(SEL)arg1 willModify:(_Bool)arg2;
- (void)removeAllHeaders;
- (void)removeHeaderForKey:(unsigned int)arg1;
- (void)setHeader:(id)arg1 forKey:(unsigned int)arg2;
- (id)headerForKey:(unsigned int)arg1 willModify:(_Bool)arg2 createIfNotThere:(_Bool)arg3;
- (id)headerForKey:(unsigned int)arg1 willModify:(_Bool)arg2;
- (id)packageLocator;
- (unsigned long long)flushableSize;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

