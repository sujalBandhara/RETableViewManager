//
// RETableViewCellStyle.h
// RETableViewManager
//
// Copyright (c) 2013 Roman Efimov (https://github.com/romaonthego)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#import <Foundation/Foundation.h>

typedef enum _RETableViewCellType {
    RETableViewCellFirst,
    RETableViewCellMiddle,
    RETableViewCellLast,
    RETableViewCellSingle
} RETableViewCellType;

@interface RETableViewCellStyle : NSObject {
    NSMutableDictionary *_backgroundImages;
}

@property (strong, nonatomic) UIFont *font;

- (UIImage *)backgroundImageForCellType:(RETableViewCellType)cellType;
- (void)setBackgroundImage:(UIImage *)image forCellType:(RETableViewCellType)cellType;
/*@property (strong, nonatomic) UIImage *backgroundImageFirst;
@property (strong, nonatomic) UIImage *backgroundImageMiddle;
@property (strong, nonatomic) UIImage *backgroundImageLast;
@property (strong, nonatomic) UIImage *backgroundImageSingle;*/

@end
