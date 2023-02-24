"""Unittests for island_perimeter"""
import unittest
island_perimeter_module = __import__("5-island_perimeter")
island_perimeter = island_perimeter_module.island_perimeter


class TestIslandPerimeter(unittest.TestCase):
    """Tests class for island_perimeter"""
    def test_docstrings(self):
        """test the docstrings"""
        self.assertIsNotNone(island_perimeter_module.__doc__)
        self.assertIsNotNone(island_perimeter.__doc__)

    def test_types(self):
        """make sure value errors are raised when necessary"""
        self.assertRaises(TypeError, island_perimeter, 12)
        self.assertRaises(TypeError, island_perimeter, 12.5)
        self.assertRaises(TypeError, island_perimeter, "hello")

    def test_correct_output(self):
        """test for correct output from the function"""
        grid = [
            [0, 0, 0, 0, 0, 0],
            [0, 1, 0, 0, 0, 0],
            [0, 1, 0, 0, 0, 0],
            [0, 1, 1, 1, 0, 0],
            [0, 0, 0, 0, 0, 0]
        ]
        self.assertEqual(island_perimeter(grid), 12)
        grid = [
            [0, 0, 0, 0, 0],
            [0, 0, 1, 0, 0],
            [0, 1, 1, 1, 0],
            [0, 0, 1, 0, 0],
            [0, 0, 0, 0, 0]
        ]
        self.assertEqual(island_perimeter(grid), 12)
        grid = [
            [0, 0, 0, 0],
            [0, 1, 1, 0],
            [0, 1, 1, 0],
            [0, 0, 0, 0]
        ]
        self.assertEqual(island_perimeter(grid), 8)
        grid = [
            [0, 0, 0, 0, 0, 0, 0],
            [0, 1, 1, 0, 0, 0, 0],
            [0, 1, 1, 0, 0, 0, 0],
            [0, 1, 1, 1, 1, 1, 0],
            [0, 1, 1, 1, 1, 1, 0],
            [0, 0, 0, 0, 1, 1, 0],
            [0, 0, 0, 0, 0, 0, 0]
        ]
        self.assertEqual(island_perimeter(grid), 20)


if __name__ == '__main__':
    unittest.main()
